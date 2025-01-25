#include "glyphfactory.h"
#include "character.h"
#include "column.h"
#include "row.h"

GlyphFactory::GlyphFactory() {
  for (int i = 0; i < NCHARCODES; ++i) {
    _character[i] = nullptr;
  }
}

Character *GlyphFactory::CreateCharacter(char c) {
  if (!_character[c]) {
    _character[c] = new Character(c);
  }

  return _character[c];
}

Row *GlyphFactory::CreateRow() { return new Row; }

Column *GlyphFactory::CreateColumn() { return new Column; }
