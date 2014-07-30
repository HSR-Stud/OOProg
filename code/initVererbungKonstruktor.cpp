Book::Book(const string& aName,
           int aCode,
           double aPrice,
           int aRating,
           const string& aComment,
           const string& aAuthor,
           const string& aTitle,
           const string& aIsbn) :
author(aAuthor), title(aTitle), isbn(aIsbn) // eigene Attribute 
{
  setName(aName);
  setCode(aCode);
  setPrice(aPrice);
  setRating(aRating);
  setComment(aComment);
}