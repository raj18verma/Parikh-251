
string multiplyStrings(string a , string b ){
    //Write your code here
    int m = a.length();
    int n = b.length();

    // Base condition
    if (m == 0 || n == 0 || a == "0" || b == "0") {
        return "0";
    }
    if (a == "1") {
        return b;
    }
    if (b == "1") {
        return a;
    }

    // Result can be maximum of length M+N
    // for example 99*999 = 98901 (Result is of length 5)
    int result[m + n] = {0};

    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int product = (a[i] - '0') * (b[j] - '0');
            // Adding previous values in result array into this product.
            product += result[i + j + 1];

            // Adding the new product into the result array
            result[i + j + 1] = product % 10;
            result[i + j] += product / 10;
        }
    }

    string ans = "";
    for (int i = 0; i < m + n; i++) {
        if (ans.length() == 0 && result[i] == 0) {
            continue;
        }
        ans += to_string(result[i]);
    }

    return ans;
}

// Yt reference video --> https://youtu.be/rUVg2Vewbo8
