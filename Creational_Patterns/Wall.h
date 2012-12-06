#ifndef WALL_H
#define WALL_H

#include "MapSite.h"

class Wall : public MapSite {
public:
    Wall();
    Wall(const Wall&);
    virtual Wall* Clone() const;
    virtual void Enter();
};

#endif /* WALL_H */
