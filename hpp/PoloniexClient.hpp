#pragma once

#include <QCoreApplication>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QString>


#include <iostream>
#include <string>
#include <sstream>

#include "../hpp/Request.hpp"

class PoloniexClient
{

private:


public:

  //API Wrapper Methods

  //PUBLIC API
  std::string public_TickerRequest();
  std::string public_VolumeRequest();
  std::string public_OrderBookRequest(std::string && pairs, int && depth);
  std::string public_TradeHistory();
  std::string public_tData();
  std::string public_Currencies();
  std::string public_LoanOrders();


  //Trading API
  std::string Balances();
  std::string CompleteBalances();
  std::string DepositAddresses();
  std::string GenerateNewAddress();
  std::string DepositsWithdrawals();
  std::string OpenOrders();
  std::string TradeHistory();
  std::string OrderTrades();

  std::string Buy();
  std::string Sell();
  std::string CancelOrder();
  std::string MoveOrder();
  std::string withdraw();
  std::string feeInfo();
  std::string AvailableAccountBalances();
  std::string TradableBalances();
  std::string transferBalance();
  std::string marginAccountSummary();
  std::string marginBuy();
  std::string marginSell();
  std::string getMarginPosition();
  std::string closeMarginPosition();
  std::string OpenLoanOffers();
  std::string ActiveLoans();
  std::string LendingHistory();


  bool createLoanOffer();
  bool cancelLoanOffer();
  bool toggleAutoRenew();
  bool canConnect();
  bool isAuthenticated();





};
