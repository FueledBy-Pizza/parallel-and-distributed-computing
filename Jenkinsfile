pipeline {
    agent{
        label 'docker'
    }
    stages {
        stage('Build') {
            steps {
                sh 'echo Hello world!'
            }
        }
    }
    post {
        always {
            script {
                step([$class: 'RepositoryMinerStep', scm: 'Git'])
            }
        }
    }
}
