import json

dummyData = {
    "name": "John Doe",
    "age": 30,
    "email": "johndoe@email.com",
    "phone": "123-456-7890",
}

print(f"Original Data: {dummyData}")
print(f"JSON Data: {json.dumps(dummyData, indent=4)}")