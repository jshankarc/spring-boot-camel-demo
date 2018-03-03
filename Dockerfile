FROM java:8-alpine
MAINTAINER Jayashankar <jshankarc1@gmail.com>
VOLUME /tmp
ARG JAR_FILE
ADD ./target/${JAR_FILE} /app.jar
RUN sh -c 'touch /app.jar'
EXPOSE 31001
ENTRYPOINT ["java","-Djava.security.egd=file:/dev/./urandom","-jar","/app.jar"]