#include <iostream>
#include <string>

using namespace std;

class Stock {
private:                                            // A private string data field named symbol, a private string data field named name
    string symbol;                                  // A private double data field named previousClosingPrice, a private double data field named currentPrice
    string name;
    double previousClosingPrice;
    double currentPrice;

public:
    Stock(const string& sym, const string& nm) {
        symbol = sym;
        name = nm;
    }
                                                    // Constant accessor functions for all data fields
    string getSymbol() const {
        return symbol;
    }

    string getName() const {
        return name;
    }

    double getPreviousClosingPrice() const {
        return previousClosingPrice;
    }

    double getCurrentPrice() const {
        return currentPrice;
    }
     
    void setPreviousClosingPrice(double price) {
        previousClosingPrice = price;
    }

    void setCurrentPrice(double price) {
        currentPrice = price;
    }


    double getChangePercent() const {                               // A constant function named getChangePercent() that returns the percentage changed from previousClosingPrice to currentPrice.
        double change = currentPrice - previousClosingPrice;        // Difference
        double percent = (change/previousClosingPrice) * 100;       // Percentage
        return percent;
    }

};

// For next time: accessors, mutator

int main() {
    Stock testStock("NVDA", "NIVIDIA");                     // Object of Stock, symbol "NVDA", name "NIVIDIA"
    testStock.setPreviousClosingPrice(27.5);                     // Previous closing price = 27.5, current price = 27.6
    testStock.setCurrentPrice(27.6);
    cout << "Previous Closing Price: " << testStock.getPreviousClosingPrice() << endl << "Current Price: " << testStock.getCurrentPrice() << endl << "Percent Change: " << testStock.getChangePercent() << endl;
}