pipeline {
    agent {
        label 'docker'
    }
    stages {
        stage('Build') {
            steps {
                script {
                    // Simulate a failure by using the 'error' step
                    error("This pipeline intentionally fails. Will My Post Action Stage execute?")
                }
            }
        }
        post {
            always {
                stage('Final Stage') {
                    steps {
                        // This stage will run regardless of the success or failure of previous stages
                        echo 'This is the final stage.'
                        // Add your final stage steps here
                    }
                }
            }
        }
    }
}
