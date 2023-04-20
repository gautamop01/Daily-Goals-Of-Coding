
        for (int char_val = 0; char_val < 26; char_val++)
        {
            int x_val = 0, temp = 0;
            for (int x = 0; x < str_len; x = x_val)
            {
                for (; x_val < str_len && str[x_val] == char_val + 'a'; x_val++)
                {
                }
                int y_val;
                for (y_val = x_val; y_val < str_len && str[y_val] != char_val + 'a'; y_val++)
                {
                }
                temp = max(temp, y_val - x_val);
                x_val = y_val;
            }
            min_sub_str = min(min_sub_str, temp);
        }
       
