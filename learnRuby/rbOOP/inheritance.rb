class Chef
  def make_chicken()
    puts "The chef makes chicken"
  end

  def make_salad()
    puts "The chef makes salad"
  end

  def make_special_dish()
    puts "The chef makes some special things"
  end
end

class ItalianChef < Chef
  def make_pasta()
    puts "The chef makes pasta"
  end
end


class Chef
  attr_accessor :name, :age
  def initialize(name, age)
    @name = name
    @age = age
  end

  def make_chicken()
    puts "The chef makes chicken"
  end

  def make_salad()
    puts "The chef makes salad"
  end

  def make_special_dish()
    puts "The chef makes some special things"
  end
end

class ItalianChef < Chef
  attr_accessor :region
  def initialize(name, age, region)
    @region = region
    super(name, age)
  end

  def make_pasta()
    puts "The chef makes pasta"
  end
end


