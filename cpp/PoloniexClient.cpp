#include "../hpp/PoloniexClient.hpp"


/*** Grab the current ticker for all markets ***/
std::string PoloniexClient::public_TickerRequest(){

  std::string apiString = "https://poloniex.com/public?command=returnTicker";

  //Create the request object
  Request r(apiString);

  //Send the request and if success, return the response.
  if(r.sendRequest())
    {
      return r.response;
    }
  else
    {
      return "FAIL";
    }
}


/***Returns the 24-hour volume for all markets, plus totals for primary currencies.***/
std::string PoloniexClient::public_VolumeRequest(){

  std::string apiString = "https://poloniex.com/public?command=return24hVolume";

  //Create the request object
  Request r(apiString);

  //Send the request and if success, return the response.
  if(r.sendRequest())
    {
      return r.response;
    }
  else
    {
      return "FAIL";
    }
}

std::string PoloniexClient::public_OrderBookRequest(std::string && pairs, int && depth){

  std::stringstream ss;
  ss << "https://poloniex.com/public?command=returnOrderBook&currencyPair=" << pairs << "&depth=" << depth;
  std::string apiString = ss.str();

  //Create the request object
  Request r(apiString);

  //Send the request and if success, return the response.
  if(r.sendRequest())
    {
      return r.response;
    }
  else
    {
      return "FAIL";
    }
}



bool PoloniexClient::canConnect(){

}


bool PoloniexClient::isAuthenticated(){

  return true;

}
