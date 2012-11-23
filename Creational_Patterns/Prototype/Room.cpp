#include "Room.h"

Room* Room::Clone() const {
    return new Room(*this);
}
