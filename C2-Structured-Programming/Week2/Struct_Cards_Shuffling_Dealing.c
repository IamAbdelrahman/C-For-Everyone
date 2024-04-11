/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - C-For-Everyone
 *****************************************************************************/
/**
 * @file Struct_Card_Shuffling_Dealing.c
 * @program:    Write a function that randomly shuffles the deck.
                Then deal out 7 card hands and evaluate the probability that a hand has no pair,
                one pair, two pair, three of a kind, full house and 4 of a kind.
 *
 * @author Abdelrahman Kamal
 * @date 01/01/2024
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define SUITS 4
#define FACES 13
#define CARDS 52
typedef enum suit
{
    HEARTS,
    DIAMONDS,
    CLUBS,
    SPADES,
} SUIT_t;

typedef struct card
{
    SUIT_t suit;
    short int pips;
} SCard_t;

void shuffle_deck(SCard_t[]);
int main()
{
    SCard_t deck[52];
    // Initialize the deck
    int cardIndex = 0;
    for (SUIT_t s = HEARTS; s <= SPADES; ++s)
    {
        for (short pips = 1; pips <= 13; ++pips)
        {
            deck[cardIndex].suit = s;
            deck[cardIndex].pips = pips;
            ++cardIndex;
        }
    }
    shuffle_deck(deck);

    int no_pair = 0, one_pair = 0, two_pair = 0, three_kind = 0, full_house = 0, four_kind = 0;
    int total_hands = 1000000; // Set the number of hands

    for (int i = 0; i < total_hands; i++)
    {
        shuffle_deck(deck);
        SCard_t hand[7];
        for (int j = 0; j < 7; j++)
        {
            hand[j] = deck[j];
        }
        // Sort the hand by pips
        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 7; j++)
            {
                if (hand[i].pips > hand[j].pips)
                {
                    SCard_t temp = hand[i];
                    hand[i] = hand[j];
                    hand[j] = temp;
                }
            }
        }

        // Count card occurrences
        int pip_counts[15] = {0}; // Initialize pip counts to 0
        for (int i = 0; i < 7; i++)
        {
            pip_counts[hand[i].pips]++;
        }

        // Check for hand ranks
        bool found_rank = false;
        for (int i = 0; i < 15; i++)
        {
            if (pip_counts[i] == 4)
            {
                four_kind++;
                found_rank = true;
                break; // No need to check further for higher ranks
            }
            else if (pip_counts[i] == 3)
            {
                // Check for full house or three of a kind
                bool found_pair = false;
                for (int j = 0; j < 15; j++)
                {
                    if (j != i && pip_counts[j] == 2)
                    {
                        full_house++;
                        found_rank = true;
                        break; // Full house found, move to next hand
                    }
                }
                if (!found_pair)
                {
                    three_kind++;
                    found_rank = true;
                    break; // Three of a kind found, move to next hand
                }
            }
            else if (pip_counts[i] == 2)
            {
                int pairs = 0;
                for (int j = 0; j < 15; j++)
                {
                    if (pip_counts[j] == 2)
                    {
                        pairs++;
                    }
                }
                if (pairs == 1)
                {
                    one_pair++;
                    found_rank = true;
                    break; // One pair found, move to next hand
                }
                else if (pairs == 2)
                {
                    two_pair++;
                    found_rank = true;
                    break; // Two pair found, move to next hand
                }
            }
        }
        if (!found_rank)
        {
            no_pair++;
        }
    }

    // Calculate probabilities based on the counts
    double prob_no_pair = (double)no_pair / total_hands;
    double prob_one_pair = (double)one_pair / total_hands;
    double prob_two_pair = (double)two_pair / total_hands;
    double prob_three_kind = (double)three_kind / total_hands;
    double prob_full_house = (double)full_house / total_hands;
    double prob_four_kind = (double)four_kind / total_hands;

    // Print the results
    printf("Probability of no pair: %lf\n", prob_no_pair);
    printf("Probability of one pair: %lf\n", prob_one_pair);
    printf("Probability of two pair: %lf\n", prob_two_pair);
    printf("Probability of three kind: %lf\n", prob_three_kind);
    printf("Probability of full house: %lf\n", prob_full_house);
    printf("Probability of four kind: %lf\n", prob_four_kind);

    return 0;
}

void shuffle_deck(SCard_t deck[])
{
    srand(time(NULL));
    for (int i = 0; i < CARDS; i++)
    {
        int j = rand() % CARDS;
        SCard_t temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}
