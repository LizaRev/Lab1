using System;

namespace MyProgram
{
    public class MString
    {
        private string value = ""; 

        public void SetValue(string newValue) 
        {
            value = newValue;
        }

        public string GetValue()
        {
            return value;
        }

        public int Length()
        {
            int count = 0;
            foreach (char symbol in value)
            {
                count++;
            }
            return count;
        }

        public void RemoveFive()
        {
            string newValue = "";
            foreach (char symbol in value)
            {
                if (symbol != '5')
                {
                    newValue += symbol;
                }
            }
            value = newValue;
        }
    }
}