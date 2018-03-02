FROM java:8-jre-alpine
MAINTAINER Jayashankar <jshankarc1@gmail.com>
ADD target/spring-boot-camel-demo-1.0.jar /app.jar
CMD ["java", "-jar", "/app.jar"]
EXPOSE 3001