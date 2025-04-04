import requests
import json

test_get_url = "https://jsonplaceholder.typicode.com/todos/1"
test_posts_url = "https://jsonplaceholder.typicode.com/posts"

response = requests.get(url=test_get_url)
print(response.status_code)
print(response.json())

payload = {
    "name": "New Item",
    "status": "Pending"
}
response = requests.post(url=test_posts_url, json=payload)
print(response.status_code)
print(response.json())



# Client Errors (4xx):
# 400 Bad Request: Invalid request format sent by the client.
# 404 Not Found: Requested resource not found on the server.
# 401 Unauthorized: Requires authentication credentials to access the resource.
# 403 Forbidden: Access to the resource is denied.

# Server Errors (5xx):
# 500 Internal Server Error: General server error, unknown cause.
# 503 Service Unavailable: Server temporarily unavailable.
# 502 Bad Gateway: Problem with a proxy server trying to reach another server.
# 504 Gateway Timeout: Timeout while waiting for a response from another server.



#CURL

# Fetch a webpage:
# curl https://www.example.com - This will display the HTML content of the webpage.

# Download a file:
# curl -O https://www.example.com/file.pdf - Downloads "file.pdf" to your current directory.

# Send a POST request:
# curl -X POST -H "Content-Type: application/json" -d '{"key": "value"}' https://api.example.com/endpoint

# Important curl options:
# -X (or --request): Specifies the HTTP method (like "GET", "POST", "PUT", "DELETE")

# -H (or --header): Adds custom HTTP headers to the request
# curl -H "Authorization: Bearer YOUR_ACCESS_TOKEN" https://api.example.com/data

# -d (or --data): Sends data in the body of a POST request

# -u (or --user): Provides basic authentication credentials (username:password)
# curl -u myuser:mypassword -X GET https://api.example.com/data

# -o (or --output): Saves the response to a file
