/*
 * stack.h
 *
 *  Created on: 21.05.2013
 *      Author: rbondere
 */

#ifndef STACK_H_
#define STACK_H_

template<typename ElemType, int size = 10>
class Stack
{
  public:
    Stack();
    // Default-Konstruktor

    void push(const ElemType& e);
    // legt ein Element auf den Stack, falls der Stack noch nicht voll ist
    // wasError() gibt Auskunft, ob push() erfolgreich war

    ElemType pop();
    // nimmt ein Element vom Stack, falls der Stack nicht leer ist
    // wasError() gibt Auskunft, ob pop() erfolgreich war

    ElemType peek() const;
    // liest das oberste Element vom Stack, falls der Stack nicht leer ist
    // wasError() gibt Auskunft, ob peek() erfolgreich war

    bool isEmpty() const;
    // return: true: Stack ist leer
    //         false: sonst

    bool wasError() const;
    // return: true: Operation war fehlerhaft
    //         false: sonst

  private:
    ElemType elems[size]; // Speicher für Speicherung des Stacks
    int top;              // Arrayindex des naechsten freien Elements
    mutable bool error;   // true: Fehler passiert; false: sonst
    // mutable: auch const-Methoden können dieses Attribut setzen
};

// ugly include
#include "stack.cpp"
#endif // STACK_H_

/*
 * stack.cpp
 *
 *  Created on: 21.05.2013
 *      Author: rbondere
 */

template<typename ElemType, int size>
Stack<ElemType, size>::Stack() :
  top(0), error(false)
{
}

template<typename ElemType, int size>
void Stack<ElemType, size>::push(const ElemType& e)
{
  error = top == size;
  if (!error)
  {
    elems[top] = e;
    top++;
  }
}

template<typename ElemType, int size>
ElemType Stack<ElemType, size>::pop()
{
  error = top == 0;
  if (!error)
  {
    --top;
    return elems[top];
  }
  else
    return 0;
}

template<typename ElemType, int size>
ElemType Stack<ElemType, size>::peek() const
{
  error = top == 0;
  if (!error)
    return elems[top - 1];
  else
    return 0;
}

template<typename ElemType, int size>
bool Stack<ElemType, size>::isEmpty() const
{
  return top == 0;
}

template<typename ElemType, int size>
bool Stack<ElemType, size>::wasError() const
{
  return error;
}