// BIDDER poll

//https://github.com/maxkgd89/Pr100daysChallange/blob/main/09_02_BlindAuction.py
#include <iostream>
#include <string>
#include <map>
using namespace std;

void find_highest_bidder(const map<string, int>& bidding_record) //void takes dict as param
    {
    int highest_bid = 0;
    string winner;

    for (const auto& pair : bidding_record) {
        if (pair.second > highest_bid) { //if d1.value is highest
            highest_bid = pair.second; //highest bid is d1.value
            winner = pair.first; //winner is d1.key
        }
    }

    cout << "The winner is " << winner << " with a bid of $" << highest_bid << endl;
}

int main() {
    map<string, int> bids;
    bool bidding_finished = false;

    while (!bidding_finished) {
        string name;
        int price;
        string should_continue;

        cout << "What is your name?: ";
        cin >> name;

        cout << "What is your bid?: $";
        cin >> price;

        bids[name] = price;

        cout << "Are there any other bidders? Type 'yes' or 'no'." << endl;
        cin >> should_continue;

        if (should_continue == "no") {
            bidding_finished = true;
            find_highest_bidder(bids);
        } else if (should_continue == "yes") {
            bidding_finished = false;
        }
    }

    return 0;
}