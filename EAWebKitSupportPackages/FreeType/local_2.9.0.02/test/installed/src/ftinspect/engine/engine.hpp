// engine.hpp

// Copyright (C) 2016-2017 by Werner Lemberg.


#pragma once

#include <QString>
#include <QMap>

#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_OUTLINE_H
#include FT_CACHE_H


// This structure maps the (font, face, instance) index triplet to abstract
// IDs (generated by a running number stored in MainGUI's `faceCounter'
// member).
//
// Qt's `QMap' class needs an implementation of the `<' operator.

struct FaceID
{
  int fontIndex;
  long faceIndex;
  int namedInstanceIndex;

  FaceID();
  FaceID(int fontIndex,
         long faceIndex,
         int namedInstanceIndex);
  bool operator<(const FaceID& other) const;
};


class MainGUI;

// FreeType specific data.

class Engine
{
public:
  Engine(MainGUI*);
  ~Engine();

  const QString& currentFamilyName();
  const QString& currentStyleName();
  QString glyphName(int glyphIndex);
  long numberOfFaces(int fontIndex);
  int numberOfNamedInstances(int fontIndex,
                             long faceIndex);
  int loadFont(int fontIndex,
               long faceIndex,
               int namedInstanceIndex); // return number of glyphs
  FT_Outline* loadOutline(int glyphIndex);
  void removeFont(int fontIndex);
  void setCFFHintingMode(int mode);
  void setTTInterpreterVersion(int version);
  void update();

  friend class MainGUI;
  friend FT_Error faceRequester(FTC_FaceID,
                                FT_Library,
                                FT_Pointer,
                                FT_Face*);

  // XXX cover all available modules
  enum FontType
  {
    FontType_CFF,
    FontType_TrueType,
    FontType_Other
  };

private:
  MainGUI* gui;

  int faceCounter; // a running number used to initialize `faceIDMap'
  QMap<FaceID, int> faceIDMap;

  QString curFamilyName;
  QString curStyleName;

  FT_Library library;
  FTC_Manager cacheManager;
  FTC_ImageCache imageCache;
  FTC_SBitCache sbitsCache;

  FTC_ScalerRec scaler;
  FT_Size ftSize;

  int cffHintingEngineDefault;
  int cffHintingEngineOther;

  int ttInterpreterVersionDefault;
  int ttInterpreterVersionOther;
  int ttInterpreterVersionOther1;

  int fontType;

  int haveWarping;

  double pointSize;
  double pixelSize;
  unsigned int dpi;

  bool doHinting;
  bool doAutoHinting;
  bool doHorizontalHinting;
  bool doVerticalHinting;
  bool doBlueZoneHinting;
  bool showSegments;
  bool doWarping;

  double gamma;

  unsigned long loadFlags;
};


// end of engine.hpp
