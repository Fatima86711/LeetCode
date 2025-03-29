/* Write your PL/SQL query statement below */
SELECT Person.firstName, Person.lastName,Address.city,Address.state
 FROM Person person LEFT JOIN Address address ON Person.personId = Address.personid ;