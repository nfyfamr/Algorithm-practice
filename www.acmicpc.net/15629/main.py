input = open(0).readline
N = int(input())

visa = {
    'botswana': 0,
    'ethiopia': 50,
    'kenya': 50,
    'namibia': 140,
    'south-africa': 0,
    'tanzania': 50,
    'zambia': 50,
    'zimbabwe': 30,
}

cost = 0
country = 'None'
for i in range(N):
    prev_country = country
    country = input().strip()

    if i != 0 and prev_country == 'zambia' and country == 'zimbabwe':
        pass
    elif i != 0 and prev_country == 'zimbabwe' and country == 'zambia':
        cost = cost + 20
    else:
        cost = cost + visa[country]

    if country == 'south-africa':
        visa['namibia'] = 40

print(cost)
