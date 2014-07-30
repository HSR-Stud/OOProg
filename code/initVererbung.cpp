Book::Book(const string& aName,
           int aCode,
           double aPrice,
           int aRating,
           const string& aComment,
           const string& aAuthor,
           const string& aTitle,
           const string& aIsbn) :
Article(aName, aCode, aPrice, aRating, aComment),
author(aAuthor), title(aTitle), isbn(aIsbn)
{ 
}