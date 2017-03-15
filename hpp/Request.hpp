#pragma once

#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>



class Request
{

private:
  QEventLoop eventLoop;
  QNetworkAccessManager mgr;

  std::string url = "";

public:

  std::string response = "";

  //Constructor taking the complete url to be sent to API
  Request(std::string & completeUrl);

  //This method should return false if the request was bad
  //It should also update the response if success
  bool sendRequest();


};
