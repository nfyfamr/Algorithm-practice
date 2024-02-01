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
for i in range(N):
    country = input().strip()
    cost = cost + visa[country]
    if country == 'zambia':
        visa['zimbabwe'] = 0
    elif country == 'zimbabwe':
        visa['zambia'] = 20
    elif country == 'south-africa':
        visa['namibia'] = 40

print(cost)
