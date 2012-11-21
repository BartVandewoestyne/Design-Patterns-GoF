#include "Wall.h"

Wall* Wall::Clone() {
    return new Wall(*this);
}
