#ifndef MAZE_GAME_H
#define MAZE_GAME_H

class Maze;
class MazeFactory;

class MazeGame {
public:
  Maze *MazeGame::CreateMaze();

  // factory methods:

  virtual Maze *MakeMaze() const { return new Maze; }
  virtual Room *MakeRoom(int n) const { return new Room(n); }
  virtual Wall *MakeWall() const { return new Wall; }
  virtual Door *MakeDoor(Room *r1, Room *r2) const { return new Door(r1, r2); }
};
#endif // MAZE_GAME_H
