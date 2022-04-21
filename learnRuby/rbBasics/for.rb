for index in 0..5 # this 1..5 is something like 1..5 in bash
  puts index
end

5.times do |index|
  puts index
end

lucky_numbers = [1, 2, 3, 4, 5]
for lucky_num in lucky_numbers
  puts lucky_num
end

lucky_numbers.each do |lucky_num|
  puts lucky_num
end
