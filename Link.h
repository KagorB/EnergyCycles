#pragma once
#include <iostream>
#include <string>

class Link {
public:
  int first, second;
  char type;

  Link() = default;

  Link(int f, int s, char t) : first(f), second(s), type(t) {}

  int GetF() const { return first; }
  int GetS() const { return second; }
  char GetT() const { return type; }

  void SetF(int f) { first = f; }
  void SetS(int s) { second = s; }
  void SetT(char t) { type = t; }
};