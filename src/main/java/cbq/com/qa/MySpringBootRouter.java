package cbq.com.qa;

import org.apache.camel.builder.RouteBuilder;
import org.springframework.context.annotation.Bean;
import org.springframework.stereotype.Component;

@Component
public class MySpringBootRouter extends RouteBuilder {

    @Override
    public void configure() {
        from("restlet:http://0.0.0.0:3001/myapps")
                .transform().simple("ref:myBean")
                .to("log:out");
    }

    @Bean
    String myBean() {
        return "This my first Docker Kubernetes Demo!";
    }

}
