#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  typedef T* iterator;

  iterator begin() {
    std::stack<T> tmp;
    T toPush;
    iterator b;

    // 1.pusher le top de this ds tmp jusque vide
    while (!this->empty()) {
      toPush = this->top();
      tmp.push(toPush);
      this->pop();
    }

    // 2 .remettre le dernier dans this => begin
    toPush = tmp.top();
    this->push(toPush);
    tmp.pop();

    // 3.garder l'adresse du 1er (= actuellement dernier) de this
    b = &(this->top());

    // 4.remettre tt dans this
    while (!tmp.empty()) {
      toPush = tmp.top();
      this->push(tmp.top());
      tmp.pop();
    }

    // 5.retourner adresse enregistree
    return b;
  }

  // doit retourner l'adresse apres le dernier element
  iterator end() { return &(this->top()) + 1; };
};

#endif
