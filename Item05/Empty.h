#ifndef ITEM05_EMPTY_H_
#define ITEM05_EMPTY_H_


namespace Item05 {

  class Empty {

  public:

    /// <summary>
    /// # Constructor
    /// </summary>
    Empty();

    /// <summary>
    /// # Destructor
    /// </summary>
    ~Empty();

    Empty(Empty const& rhs);

    Empty& operator=(Empty const& rhs);

  private:

  };

}


#endif  // ITEM05_EMPTY_H_
