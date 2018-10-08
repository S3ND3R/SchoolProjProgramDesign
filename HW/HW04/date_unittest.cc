#include "gtest/gtest.h"

#include <iostream>
#include <math.h>
#include <time.h>
#include <string>

#include "date.h"


class DateTest : public ::testing::Test {
 public:
  void SetUp( ) { 
    // code here will execute just before the test ensues 
	first_day = Date(2018, 9, 4);
	last_day = Date(2018, 12, 11);
	first_day_month = Date(2018,10,1);
	last_day_month = Date(2018,10,31);
	first_day_year = Date(2018,1,1);
	last_day_year = Date(2018,12,31);
	epoch_date = (1539010880);        // 10-08-2018
        leap_day_pre = Date(2016, 2, 28);	
	leap_day_post = Date(2016, 3, 1);
	current_day = Date();
  }
 protected:
  Date first_day;          // first day of classes
  Date last_day;           // last day of classes
  Date first_day_month;    // First day of a month
  Date last_day_month;     // Last day of a month
  Date first_day_year;    // First day of a year
  Date last_day_year;     // Last day of a year
  Date epoch_date;	 // epoch constructed day
  Date leap_day_pre;	// second to last day in feb during a leap year
  Date leap_day_post;	// first day in march during a leap year
  Date current_day;    // current date
};


//Testing the PrintDate method with newline
TEST_F(DateTest, PrintDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31\n";
  std::string expected_out_2 = "1776-07-04\n";
  std::string expected_out_3 = "2018-10-31\n";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

//Testing the PrintDate w/o newline
TEST_F(DateTest, PrintDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31";
  std::string expected_out_2 = "1776-07-04";
  std::string expected_out_3 = "2018-10-31";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();

  testing::internal::CaptureStdout();
  ind_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

//Testing PrintUSdates with Newline
TEST_F(DateTest, PrintUSDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "12-31-1999\n";
  std::string expected_out_2 = "07-04-1776\n";
  std::string expected_out_3 = "10-31-2018\n";
  
  testing::internal::CaptureStdout();
  y2k.PrintUsDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintUsDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintUsDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}

//Testing the PrintDate w/o newline
TEST_F(DateTest, PrintDateUsTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "12-31-1999";
  std::string expected_out_2 = "07-04-1776";
  std::string expected_out_3 = "10-31-2018";
  
  testing::internal::CaptureStdout();
  y2k.PrintUsDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintUsDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintUsDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);
}


/**
  *
  * Note, this is the only provided test case which actually uses our test fixture
  * 
  * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
  *
  */

// testing datebetween
TEST_F(DateTest, DaysBetweenTests) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
  EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
  EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";
  EXPECT_EQ(first_day.DaysBetween(first_day), 0) << "Days between is not calculated properly";
  EXPECT_EQ(leap_day_pre.DaysBetween(first_day),919) << "Days between is not calculating for"
	  					<<" leap years";
}

//testing Getdate
TEST_F(DateTest, GetDateTests) {
  EXPECT_EQ(first_day.GetDate(), "2018-09-04") << "Get date is not accessing date correctly";
}

// testing GetUsDate
TEST_F(DateTest, GetusDateTests) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "Get US date is not accessing date correctly";
}
//testing subtraction overloaded operator
TEST_F(DateTest, OverloadedSubOperTests) {
  Date minus_date = last_day - 5;
  Date minus_month_border_date = first_day_month - 5;
  Date minus_year_border_date = first_day_year - 5;
  Date minus_leap_day = leap_day_post - 2;
  EXPECT_EQ(minus_date.GetUsDate(), "12-06-2018") << "overloaded subtraction operator is"
						  << " not functioning properly";  
  EXPECT_EQ(minus_month_border_date.GetUsDate(), "09-26-2018") << "overloaded subtraction"
	  					<< " operator is not correctly handling"
						<<" month border";
  EXPECT_EQ(minus_year_border_date.GetUsDate(), "12-27-2017") << "overloaded subtraction"
	  					<< " operator is not correctly handling"
						<<" year border";
  EXPECT_EQ(minus_leap_day.GetUsDate(), "02-28-2016") << "overloaded subtraction operator is"
						  << " not calculating for leap year"; 
}

//testing overloaded additiion operator
TEST_F(DateTest, OverloadedAddOperTests) {
  Date add_date = first_day + 5;
  Date add_month_border_date = last_day_month + 5;
  Date add_year_border_date = last_day_year + 5;
  Date add_leap_day = leap_day_pre + 2;
  EXPECT_EQ(add_date.GetUsDate(), "09-09-2018") << "overloaded addition operator is"
						  << " not functioning properly";  
  EXPECT_EQ(add_month_border_date.GetUsDate(), "11-05-2018") << "overloaded addition"
	  					<< " operator is not correctly handling"
						<<" month border";
  EXPECT_EQ(add_year_border_date.GetUsDate(), "01-05-2019") << "overloaded addition"
	  					<< " operator is not correctly handling"
						<<" year border";
  EXPECT_EQ(add_leap_day.GetUsDate(), "03-01-2016") << "overloaded addition operator is"
						  << " not calculating for leap year"; 
}

//testing the epoch constructor
TEST_F(DateTest, EpochConstructorTests) {
  EXPECT_EQ(epoch_date.GetUsDate(), "10-08-2018") << "Epoch constructor is not creating"
	  					<<" date correctly";

}

//testing the default constructor
TEST_F(DateTest, ConstructorVoidTests){

  time_t rawtime;
  struct tm* timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

  int day = timeinfo->tm_mday;
  int month = timeinfo->tm_mon + 1;
  int year = timeinfo->tm_year + 1900;
  int double_digit = 10;
  std::string day_str;
  std::string month_str;
  if (day < double_digit)
	  day_str = "0" + std::to_string(day);
  else
	 day_str = std::to_string(day);

  if (month < double_digit)
	  month_str = "0" + std::to_string(month);
  else
	 month_str = std::to_string(month);  

  std::string curr_date;
  curr_date = month_str + "-" + day_str + "-" + std::to_string(year);

  EXPECT_EQ(current_day.GetUsDate(), curr_date) << "Date constructor passed void"
	 					 << " is not assigning current date correctly"; 
	  					
}
/**
 *
  *
  * NOPE!  Can't test PRIVATE methods
  *
  */
/*
TEST(DateTest, ConvertFromDays) {
	Date convert_first_day = ConvertToDays(2458365);
	EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
}
*/
