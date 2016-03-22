/*-FinancialAidAward.cpp--------------------------------------------
建模学生财政补助的类FinancialAidAwrad的类库的实现文件
-------------------------------------------------------------------*/
#include <iostream> //cout
#include <string> //string
#include <cassert>
using namespace std;
#include "FinancialAidAward.h"

FinancialAidAward::FinancialAidAward()
: source(""),amount(0)
{}

FinancialAidAward::FinancialAidAward(string src,double amt)
{
 assert(amt >= 0);
 amount=amt;
 source=src;
}
double FinancialAidAward::getAmount() const
{return amount;}

string FinancialAidAward::getSource() const
{return source;}

void FinancialAidAward::display() const
{
 cout<<source<<": $"<<amount;
}
void FinancialAidAward::setAmount(double newAmount)
{
 assert(amount >= 0);
 amount=newAmount;
}
void FinancialAidAward::setSource(string newSource)
{source=newSource;}
