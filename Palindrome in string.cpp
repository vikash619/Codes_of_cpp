bool checkPalindrome(string inputString) {
    string temp = inputString;
    int len = inputString.length();
    
    reverse(temp.begin(), temp.end());
    if(inputString == temp)
    {
        return true;
    }
    else {
        return false;;
    }
}

int main()
{
  string inputString = "aba";
 
  if(checkPalindrome(inputString))
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"Not";
  }
  
}
