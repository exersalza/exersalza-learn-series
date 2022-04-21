lucky_numbers = [4, 8, "fiteen", 16, 32, 64.64]

lucky_numbers[0] = 90 # assign a new value on that position

puts lucky_numbers[0]
puts lucky_numbers[1]
puts lucky_numbers[-1] # get the last element

puts "\n\n"
puts lucky_numbers[2,3]
puts "\n\n"
puts lucky_numbers[2..4]
puts "\n\n"

puts lucky_numbers.length

multidimension_array = [[1, 2], [3, 4]]

puts multidimension_array[0][0] # = 1

friends = []

friends.push("Oliver")
friends.push("Oliver2")

friends.pop # remove the last element

puts friends

puts friends.reverse # reverse that shit

puts friends.sort

puts friends.include? "Oliver"
