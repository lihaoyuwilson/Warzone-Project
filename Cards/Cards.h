#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  
#include <ctime>    


enum CardType {
    BOMB,
    REINFORCEMENT,
    BLOCKADE,
    AIRLIFT,
    DIPLOMACY
};
class Card;

class Deck {
public:
    Deck();  
    Card* draw();  
    void returnToDeck(Card* card); 
    void showDeck() const;  
private:
    std::vector<Card*> cards;
};

class Card {
public:
    Card(CardType type);
    std::string getTypeAsString() const;
    void play(Deck& deck);  
private:
    CardType type;
};


class Hand {
public:
    void addCard(Card* card);  
    void removeCard(Card* card);  
    void showHand() const;  
    std::vector<Card*> getCards();  
private:
    std::vector<Card*> cards;
};

#endif
