#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <iostream>

#include "../hpp/PoloniexClient.hpp"

void sendRequest();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    PoloniexClient client;

    std::cout << client.isAuthenticated() << std::endl;

    std::string response;
    //    response = client.public_TickerRequest();
    response = client.public_OrderBookRequest("all", 10);

    std::cout << response << std::endl;


    return a.exec();
}

