
kingkelv20
/
alx-system_engineering-devops
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Breadcrumbsalx-system_engineering-devops/0x09-web_infrastructure_design
/0-simple_web_stack.md
Latest commit
amadasunese
amadasunese
1 hour ago
History
69 lines (46 loc) · 4.09 KB
File metadata and controls

Preview

Code

Blame
0-simple_web_stack

Description:

To design a one-server web infrastructure that hosts the website reachable via www.foobar.com, let's consider the user's perspective and explain the specifics about this infrastructure:

User wanting to access the website:

The user opens a web browser and enters "www.foobar.com" in the address bar.

Server:

A server refers to a computer system or a software program that provides services or resources to other computers or clients over a network, such as the internet. In this case, we have one server that will host all the necessary components for the website. Domain Name:

A domain name is a unique address that identifies a website on the internet. In this scenario, the domain name is "foobar.com." The "www" in "www.foobar.com" is a subdomain and is commonly used to indicate the World Wide Web.

DNS Record:

DNS (Domain Name System) is a system that translates domain names into IP addresses, which are used by computers to communicate over the internet. The "www" in the DNS record "www.foobar.com" is a subdomain prefix that helps route requests to the appropriate server. It is typically configured as a CNAME (Canonical Name) record or an A (Address) record, mapping it to the server's IP address.

Web Server:

The web server is responsible for handling HTTP requests from clients (browsers) and serving the requested web pages. It receives the request for www.foobar.com and delivers the corresponding web content to the user's browser. In this infrastructure, the web server will handle incoming HTTP requests for the website.

Application Server:

The application server hosts and executes the website's codebase and processes dynamic requests. It runs the server-side code and interacts with the web server to generate dynamic content. In this infrastructure, the application server executes the codebase of the website.

Database:

The database stores and manages structured data for the website, such as user accounts, content, and other relevant information. It provides the necessary data storage and retrieval capabilities for the website's functionality. In this infrastructure, the database stores and manages the website's data, often using a database management system like MySQL.

Communication between Server and User's Computer:

When a user requests the website, the server communicates with the user's computer using the HTTP (Hypertext Transfer Protocol). The server sends the requested web page or resources (HTML, CSS, images, etc.) back to the user's computer, which the browser then renders. Now, let's discuss the issues with this infrastructure:

Single Point of Failure (SPOF):

This infrastructure relies on a single server. If the server experiences a hardware failure, software crash, or any other issue, the entire website will become inaccessible. To address this, redundancy measures, such as having multiple servers or implementing failover mechanisms, can be considered. Downtime during Maintenance:

When maintenance activities are required, such as deploying new code or applying updates, the web server may need to be restarted. During the restart, the website may experience temporary downtime, resulting in users being unable to access it. To minimize downtime, maintenance activities can be planned during periods of low traffic, or a load balancer can be introduced to handle requests while one server is restarted.

Scalability Limitations:

Scalability Limitations:

With only one server, this infrastructure may face limitations in handling a large volume of incoming traffic. As the website's popularity increases or during peak traffic periods, the server may become overwhelmed, leading to slow response times or crashes. To address scalability, additional servers can be added, load balancing techniques can be implemented, and optimizations can be made at various levels (code, database queries, caching, etc.). These considerations highlight the importance of redundancy, scalability, and maintenance planning to ensure a more reliable and scalable web infrastructure.
