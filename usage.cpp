#include "yfinance.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    yfinance::YahooFinanceAPI api;
    api.set_interval(MONTHLY);
    api.download_ticker_data("AAPL", "2020-01-01", "2023-06-01");

    return 0;
}