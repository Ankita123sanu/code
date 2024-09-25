# Initialize the sum to 0
sum_series_rounded = 0

# Loop from 1 to 10000
for n in range(1,4):
    rounded_value = round(1 / n, 5)  # Round to 5 decimal places
    print(rounded_value)
    sum_series_rounded += rounded_value
    print({sum_series_rounded})