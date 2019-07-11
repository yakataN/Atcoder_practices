hash = {}
hash_same = {}
n = gets.chomp.to_i
n.times do
    a,b = gets.chomp.split.map(&:to_i)
    if a == b
        hash_same[[a,b]] = true
    else
        hash[[a,b]] = true
        hash[[b,a]] = true
    end
end
puts hash.length/2 + hash_same.length
