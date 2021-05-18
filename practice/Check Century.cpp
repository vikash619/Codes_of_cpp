int centuryFromYear(int year) {
    int newYear = year/100;
    int currentYear = newYear + 1;
    
    if(year % 100 == 00)
    {
        return year/100;
    }
    if(currentYear > newYear)
    {
        return currentYear;
    }
    
    return -1;
}
int main()
{
  int year;
  cin>>year;
  int century = centuryFromYear(year);
  cout<<century;
}
