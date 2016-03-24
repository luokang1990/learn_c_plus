/*-FinancialAidAward.h--------------------------------
 建模学生财政补助记录的类FinancialAidAward的类库的头文件
-------------------------------------------------------*/

#ifndef FINAIDAWARD
#define FINAIDAWARD

# include <string>
class FinancialAidAward
{
 public:
   FinancialAidAward();
   FinancialAidAward(string src, double amt);
   double getAmount() const;
   string getSource() const;
   void display() const;
   void setAmount(double newAmount);
   void setSource(string newSource);
 private:
   string source;
   double amount;
};
#endif
