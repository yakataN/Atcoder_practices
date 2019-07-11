n, k = gets.chomp.split.map(&:to_i)

ue = (n-1) * (n-2) / 2
# sita = n - 2

if ue < k
    puts -1
else
    kaisu = ue - k
    puts kaisu + n - 1 
    # puts 0
    for i in 2..n
        puts "1 #{i}"
    end
    for i in 2..n
        for j in (i+1)..n
            if kaisu > 0
                puts "#{i} #{j}"
                kaisu -= 1
            end
        end
    end
end

