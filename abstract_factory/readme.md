```mermaid
classDiagram
direction BT
class AbstractFactoryInterface {
<<Interface>>
  + CreateLowLevel() LowLevelMineralPtr
  + CreateMidLevel() MidLevelMineralPtr
  + CreateHighLevel() HighLevelMineralPtr
}
class Bomb {
  + Bomb(int, int)
  ~ Display() void
}
class Diamond {
  + Diamond(int, int)
  ~ Display() void
}
class Gold {
  + Gold(int, int)
  ~ Display() void
}
class HighLevelMineral {
  + HighLevelMineral(int, int)
}
class LowLevelMineral {
  + LowLevelMineral(int, int)
}
class MidLevelMineral {
  + MidLevelMineral(int, int)
}
class Mineral {
  + Mineral(int, int)
  ~ Display() void
}
class NegativeMineralFactory {
  + NegativeMineralFactory(int, int)
  + CreateHighLevel() HighLevelMineralPtr
  + CreateMidLevel() MidLevelMineralPtr
  + CreateLowLevel() LowLevelMineralPtr
}
class PigWithDiamond {
  + PigWithDiamond(int, int)
  ~ Display() void
}
class PositiveMineralFactory {
  + PositiveMineralFactory(int, int)
  + CreateHighLevel() HighLevelMineralPtr
  + CreateLowLevel() LowLevelMineralPtr
  + CreateMidLevel() MidLevelMineralPtr
}
class Sack {
  + Sack(int, int)
  ~ Display() void
}
class Stone {
  + Stone(int, int)
  ~ Display() void
}

LowLevelMineral  -->  Mineral
MidLevelMineral  -->  Mineral
HighLevelMineral  -->  Mineral
Gold  -->  LowLevelMineral
Sack  -->  LowLevelMineral
Diamond  -->  MidLevelMineral
Stone  -->  MidLevelMineral
PigWithDiamond  -->  HighLevelMineral
Bomb  -->  HighLevelMineral
PositiveMineralFactory  ..>  AbstractFactory
NegativeMineralFactory  ..>  AbstractFactory
PositiveMineralFactory  ..>  Gold : «create»
PositiveMineralFactory  ..>  Diamond : «create»
PositiveMineralFactory  ..>  PigWithDiamond : «create»
NegativeMineralFactory  ..>  Sack : «create»
NegativeMineralFactory  ..>  Stone : «create»
NegativeMineralFactory  ..>  Bomb : «create»
```

