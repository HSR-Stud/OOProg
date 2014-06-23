// Datei: stack.h 
// Schnittstellendefinition für Stack
// R. Bonderer, 11.04.2013

#ifndef STACK_H_
#define STACK_H_

class Stack
{
  public:
    Stack();
    // Default Ctor, initialisiert den Stack
  
    void push(int e);
    // legt ein Element auf den Stack, falls der Stack noch nicht voll ist
    // wasError() gibt Auskunft, ob push() erfolgreich war
  
    int pop();
    // nimmt ein Element vom Stack, falls der Stack nicht leer ist
    // wasError() gibt Auskunft, ob pop() erfolgreich war

    int peek() const;
    // liest das oberste Element vom Stack, falls der Stack nicht leer ist
    // wasError() gibt Auskunft, ob peek() erfolgreich war
  
    bool isEmpty() const;
    // return: true: Stack ist leer
    //         false: sonst
  
    bool isFull() const;
    // return: true: Stack ist voll
    //         false: sonst
  
    bool wasError() const;
    // return: true: Operation war fehlerhaft
    //         false: sonst

  private:
    Stack(const Stack& s);  // verhindert das Kopieren von Stack-Objekten
    enum {maxElems = 10};   // Anzahl Stackelemente
    int elem[maxElems];     // Array fuer Speicherung des Stacks
    int top;                // Arrayindex des naechsten freien Elements
    mutable bool error;     // true: Fehler passiert; false: sonst
    // mutable: auch const-Methoden können dieses Attribut setzen
};

#endif // STACK_H_

// Datei: stack.cpp 
// implementiert Stackoperationen
// R. Bonderer, 11.04.2013

#include "stack.h"

Stack::Stack()
  : top(0), error(false)
{
}

void Stack::push(int e)
{
  error = isFull();
  if (!error)
  {
    elem[top] = e;
    ++top;
  }
}

int Stack::pop()
{
  error = isEmpty();
  if (!error)
  {
    --top;
    return elem[top];
  }
  else
    return 0;
}

int Stack::peek() const
{
  error = isEmpty();
  if (!error)
    return elem[top-1];
  else
    return 0;
}

bool Stack::isEmpty() const
{
  return top == 0;
}

bool Stack::isFull() const
{
  return top == maxElems;
}

bool Stack::wasError() const
{
  return error;
}