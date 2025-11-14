
# Call Stack
- কোন function এর কাজ শেষ হয়ে যাওয়ার পর যে line থেকে call করা হয়েচ্ছিলো, সে line এ চলে যাবে। Return হবে।
- কোন function কে call না করলে আমাদের compiler সেই function এর কাছে যাবে না।
- কোন function কে return না করলেও function এর কাজ শেষ হয়ে গেলে function টি যেখান থেকে call করা হয়, সেখানেই সেই line এ return হয়ে যায়।
- আমাদের code এ যখন অনেকগুলো function থাকে, তখন আমরা কোন function থেকে কোন function কে call করছি বা return আসছি, এই সকল বিষয় maintain করার জন্য memory call stack maintain করে। 
- আমরা যখন এক function থেকে অন্য function এ যাই, বা ফেরত আসি, compiler এ সকল sequence call stack এর মাধ্যমে হিসেব রাখে।

# Recursion
- কোন function যখন নিজেই নিজেকে call করে কোন একটা কাজ করে বা করিয়ে নেয়, তখন এই process টাকে recursion বলে এবং সেই function কে recursive function বলে।
- Recursion creates call stack overflow.
- Recursive function কে control করতে না পারলে infinite loop এ পরে যাবে।
- যদি কোন function infinite loop এ চলে তাহলে চাইলে তাকে ১০ বার বা ২০ বার অর্থাৎ প্রয়োজন মতো চালানো যায়, যদি তাকে control করা যায়।