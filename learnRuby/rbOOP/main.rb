class Book
  attr_accessor :title, :author
  def initialize(title, author)
    @author = author
    @title = title
  end


  def readBook()
    puts "Reading #{self.title} by #{self.author}"
  end
end

book1 = Book.new("How to run stuff", "exersalza")

book1.readBook()
puts book1.title


# Book with setter and getters

class Book1
  attr_accessor :title, :author
  def initialize(title, author)
    self.title = title
    @author = author
  end

  def title=(title)
    puts "Set"
    @title = title
  end

  def title
    puts "Get"
    return @title
  end
end
