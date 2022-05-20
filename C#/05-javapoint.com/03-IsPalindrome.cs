static class IsPalindrome{
    public static bool isPalindrome(int n){
        string s = Convert.ToString(n);
        int half = s.Length / 2;
        for (int i = 0; i < half; i++)
        {
            if (s[i] != s[s.Length - 1-i])
            {
                Console.WriteLine(s+" is not a palindrome");
                return false;
            }
        }
                Console.WriteLine(s+" is  a palindrome");
        return true;
    }
}