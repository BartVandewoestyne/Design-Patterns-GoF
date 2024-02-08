#include "GlyphFactory.h"
#include "Character.h"
#include "Row.h"
#include "Column.h"

GlyphFactory::GlyphFactory()
{
  for (int i = 0; i < NCHARCODES; ++i) {
      _character[i] = 0;
  }
}

GlyphFactory:: ~GlyphFactory()
{
    for (int i = 0; i < NCHARCODES; ++i) {
        delete _character[i];
        _character[i] = 0;
    }
}

Character* GlyphFactory::CreateCharacter(char c)
{
    if (!_character[c]) {
        _character[c] = new Character(c);
    }

    return _character[c];
}

Row* GlyphFactory::CreateRow() {
    return new Row;
}

Column* GlyphFactory::CreateColumn() {
    return new Column;
}
