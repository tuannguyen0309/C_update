#include "Card.cpp"

int main()
{
    vector<Card> card;
    card.push_back(Card("Book1", "Author1", 10));
    card.push_back(Card("Book2", "Author2", 5));
    card.push_back(Card("Book3", "Author3", 20));

    Card::sortCards(card);
    for (int i = 0; i < card.size(); i++)
    {
        card[i].display();
    }
}